//Implementing doubly linked list
const prompt = require('prompt-sync')();
class dls
{

    constructor(val)
    {
        this.val=val
        this.prev=null
        this.next=null        
    }    
}
const size=prompt("How many nodes you want to insert?:")
var prev=null
var head=null
for(var i=0;i<size;i++)
{
    var ele=prompt("Enter the element:")
    var node=new dls(ele)
    if(head==null)
    {
        head=node
        prev=node
        node.prev=null

        
    }
    else
    {
        prev.next=node
        node.prev=prev
        prev=node

    }
}
var temp=node
while(temp!=null)
{
    process.stdout.write(temp.val+" ")
    temp=temp.prev
}
var temp=head
console.log();
while(temp!=null)
{
    process.stdout.write(temp.val+" ")
    temp=temp.next
}

