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
		private:
			Node* head;
		public:
			SingleLinkedList();
			void Print();
			void AppendBeginning(unsigned);
			void AppendEnd(unsigned);
			void Delete(unsigned);
	};
#endif