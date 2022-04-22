#pragma once
#include <iostream>
#define BUCKET_SIZE 50000

namespace whoamifk {
	namespace { // anonym namespace
		template<typename _K, typename _V>
		struct pair {
			typedef _K _key;
			typedef _V _value;
			_K* key;
			_V* _value;
		};
		template<typename _K, typename _V>
		struct node {
			pair<_K, _V>* item;
			node<_K, _V>* next;
		};
	};
	template<typename _K, typename _V, typename _Alloc = std::allocator<pair<_K,_V>>>
	class HashTable
	{
	public:
		typedef _K _key;
		typedef _V _mapped;
		typedef HashTable<_key, _mapped, _Alloc> _hashTable;
		typedef pair<_K, _V> value_type;
		typedef value_type* pointer;
		typedef const value_type* const_pointer;
		typedef std::size_t size_type;

	private:
		namespace HashTable {
		
			namespace iterators {
				// implement iterators
			}
		};
		node<_K,_V>* _head;
		size_type _bucket_size=BUCKET_SIZE;

	};
};

