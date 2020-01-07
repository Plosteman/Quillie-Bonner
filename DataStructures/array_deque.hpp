#ifndef PRIORITY_ARRAY_DEQUE
#define PRIORITY_ARRAY_DEQUE

#include "array.hpp"

namespace data_structures
{

	template <class T>
	class ArrayDeque
	{
	public:
		explicit ArrayDeque(const size_t& max_size);
		ArrayDeque(const ArrayDeque& copy) noexcept(false);
		ArrayDeque& operator=(const ArrayDeque& rhs) noexcept(false);
		ArrayDeque(ArrayDeque&& copy) noexcept;
		ArrayDeque& operator=(ArrayDeque&& rhs) noexcept;

		void PushFront(const T& item) noexcept(false);
		void PushBack(const T& item) noexcept(false);
		T RemoveFront() noexcept(false);
		T RemoveBack() noexcept(false);
		T Front() const noexcept(false);
		T Back() const noexcept(false);
		bool Full() const noexcept;
		bool Empty() const noexcept;
		void Clear() noexcept;

		~ArrayDeque() = default;

	private:
		Array<T> deque_;

	};


	
}
#endif
