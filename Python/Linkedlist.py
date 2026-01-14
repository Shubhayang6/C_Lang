# Singly LL implementation

class Node:
    def __init__(self, data, next = None):
        self.data = data
        self.next = next

# Create Nodes
n1 = Node(1)
n2 = Node(2)
n3 = Node(3)
n4 = Node(4)
n5 = Node(5)

# Link Nodes
n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5

head = n1 # Pointing to the first node
current = head

while current:
    print(current.data, end = " -> ")
    current = current.next
print("None")

class LL:

    def reverse_LL(self, head):
        curr = head
        prev = None
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        return prev

ll = LL()
head = ll.reverse_LL(head)
curr = head   
while curr:
    print(curr.data, end = " -> ")
    curr = curr.next
print("None")
    
    