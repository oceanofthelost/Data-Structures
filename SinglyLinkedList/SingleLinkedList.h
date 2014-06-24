#ifndef SINGLE_LINKED_LIST_SDA
#define SINGLE_LINKED_LIST_SDA

	class Node
	{
			private:
				unsigned data;
				Node* next;
			public:
				Node();
				void SetData(unsigned);
				void GetNext(Node* passedNexed)
				int GetData();
				Node* GetNext();

	};

	class SingleLinkedList
	{
			public:
				SingleLinkedList();
				insert(unsigned);
				delete(unsigned);
	};

#endif