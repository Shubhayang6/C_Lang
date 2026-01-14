# Singly LL implementation

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Create Nodes
n1 = Node(15)
n2 = Node(12)
n3 = Node(43)
n4 = Node(66)

# Link Nodes
n1.next = n2
n2.next = n3
n3.next = n4

head = n1 # Pointing to the first node

current = head

while current:
    print(current.data, end = " -> ")
    current = current.next
print("None")