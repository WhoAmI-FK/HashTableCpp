#pragma once
#include <iostream>
#define BUCKET_SIZE 50000

namespace whoamifk {
	namespace { // anonym namespace
	/*	template<typename _K, typename _V>
		struct pair {
			_K* key;
			_V* _value;
		};
		template<typename _K, typename _V>
		struct node {
			pair<_K, _V>* item;
			node<_K, _V>* next;
		};
	*/
	};
	template<typename _K, typename _V=std::hash<_K>, class Pred = std::equal_to<_K>, typename _Alloc = std::allocator<_K>>
	class HashTable
	{
	public:
		typedef _K key_type;
		typedef _K value_type;
		typedef _V hasher;
		typedef _Alloc allocator_type;
		typedef value_type& reference;
		typedef const value_type& const_reference;
//		std::allocator_traits<std::allocator<_K>>::pointer pointer; // value_type*
		typedef size_t size_type;
		typedef std::ptrdiff_t difference_type;

	private:
//		node<_K,_V>* _head;
//		size_type _bucket_size=BUCKET_SIZE;
		
	};
};

