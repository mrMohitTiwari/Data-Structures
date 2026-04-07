class BPlusTreeNode {
 constructor(leaf = false) {
 this.leaf = leaf;
 this.keys = [];
 this.children = [];
 }
}
class BPlusTree {
 constructor(t = 4) {
 this.root = new BPlusTreeNode(true);
 this.t = t;
 }
 insert(key) {
 let root = this.root;
 if (root.keys.length === (2 * this.t - 1)) {
 let newRoot = new BPlusTreeNode();
 newRoot.children.push(root);
 this.splitChild(newRoot, 0);
 this.root = newRoot;
 this.insertNonFull(newRoot, key);
 } else {
 this.insertNonFull(root, key);
 }
 }
 insertNonFull(node, key) {
 let i = node.keys.length - 1;
 if (node.leaf) {
 node.keys.push(0);
 while (i >= 0 && key < node.keys[i]) {
 node.keys[i + 1] = node.keys[i];
 i--;
 }
 node.keys[i + 1] = key;
 } else {
 while (i >= 0 && key < node.keys[i]) i--;
 i++;
 if (node.children[i].keys.length === (2 * this.t - 1)) {
 this.splitChild(node, i);
 if (key > node.keys[i]) i++;
 }
 this.insertNonFull(node.children[i], key);
 }
 }
 splitChild(parent, i) {
 let t = this.t;
 let node = parent.children[i];
 let newNode = new BPlusTreeNode(node.leaf);
 parent.keys.splice(i, 0, node.keys[t - 1]);
 parent.children.splice(i + 1, 0, newNode);
 newNode.keys = node.keys.slice(t);
 node.keys = node.keys.slice(0, t - 1);
 if (!node.leaf) {
 newNode.children = node.children.slice(t);
 node.children = node.children.slice(0, t);
 }
 }
 display(node = this.root, level = 0) {
 console.log("Level", level, ":", node.keys);
 if (!node.leaf) {
 node.children.forEach(child => this.display(child, level + 1));
 }
 }
}
// RUN
const bpt = new BPlusTree(4);
let data = [];
for (let i = 10; i <= 500; i += 10) data.push(i);
data.forEach(d => bpt.insert(d));
console.log("Initial Tree:");
bpt.display();
[505, 515, 525, 535, 545].forEach(d => bpt.insert(d));
console.log("After Insertion:");
bpt.display();