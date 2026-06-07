class Node {
  constructor(leaf = false) {
    this.leaf = leaf;
    this.keys = [];
    this.children = [];
    this.next = null; // for leaf linking
  }
}

class BPlusTree {
  constructor(order = 4) {
    this.root = new Node(true);
    this.order = order;
  }

  insert(key) {
    let root = this.root;

    if (root.keys.length === this.order) {
      let newRoot = new Node(false);
      newRoot.children.push(root);
      this.splitChild(newRoot, 0);
      this.root = newRoot;
    }

    this.insertNonFull(this.root, key);
  }

  insertNonFull(node, key) {
    if (node.leaf) {
      node.keys.push(key);
      node.keys.sort((a, b) => a - b);
    } else {
      let i = node.keys.findIndex(k => key < k);
      if (i === -1) i = node.keys.length;

      if (node.children[i].keys.length === this.order) {
        this.splitChild(node, i);
        if (key > node.keys[i]) i++;
      }

      this.insertNonFull(node.children[i], key);
    }
  }

  splitChild(parent, index) {
    let node = parent.children[index];
    let newNode = new Node(node.leaf);
    let mid = Math.ceil(this.order / 2);

    if (node.leaf) {
      newNode.keys = node.keys.splice(mid);
      newNode.next = node.next;
      node.next = newNode;

      parent.keys.splice(index, 0, newNode.keys[0]);
      parent.children.splice(index + 1, 0, newNode);
    } else {
      newNode.keys = node.keys.splice(mid + 1);
      let upKey = node.keys.pop();

      newNode.children = node.children.splice(mid + 1);

      parent.keys.splice(index, 0, upKey);
      parent.children.splice(index + 1, 0, newNode);
    }
  }

  delete(key) {
    this._delete(this.root, key);
  }

  _delete(node, key) {
    if (node.leaf) {
      node.keys = node.keys.filter(k => k !== key);
    } else {
      let i = node.keys.findIndex(k => key < k);
      if (i === -1) i = node.keys.length;
      this._delete(node.children[i], key);
    }
  }

  modify(oldKey, newKey) {
    this.delete(oldKey);
    this.insert(newKey);
  }

  display(node = this.root, level = 0) {
    console.log("Level", level, node.keys);

    if (!node.leaf) {
      node.children.forEach(child => this.display(child, level + 1));
    }
  }

  displayLeaves() {
    let node = this.root;
    while (!node.leaf) node = node.children[0];

    console.log("Leaf Level:");
    while (node) {
      console.log(node.keys);
      node = node.next;
    }
  }
}

// Running the tree
const tree = new BPlusTree(4);

// Inserterting 50 data points for Primary id on users
for (let i = 10; i <= 500; i += 10) tree.insert(i);
console.log("Initial Tree:");
tree.display();
tree.displayLeaves();

// Insert 5 new data points
[505, 515, 525, 535, 545].forEach(x => tree.insert(x));
console.log("After Insertion of [505, 515, 525, 535, 545]:");
tree.display();
tree.displayLeaves();

// Modify
tree.modify(505, 105);
tree.modify(200, 205);
tree.modify(300, 305);
tree.modify(400, 405);
tree.modify(500, 495);
console.log("After Modification:");
tree.display();
tree.displayLeaves();

// Delete
[50, 150, 250, 350, 450].forEach(x => tree.delete(x));
console.log("After Deletion of 50, 150, 250, 350, 450:");
tree.display();
tree.displayLeaves();