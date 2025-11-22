//알고리즘 헤더에 들어있는 함수 revrese, count, max_element, min_element, unique, remove 등을 알아보는 코드
#include <iostream> // 입출력 스트림
#include <algorithm> // 알고리즘 헤더 (reverse, count, max_element, min_element, unique, remove 등 포함)
#include <vector> // 벡터 컨테이너
using namespace std; // 표준 네임스페이스 사용

// 벡터 출력 템플릿 함수
template<typename T>
void printVector(const vector<T>& vec) {
	for (const T& i : vec) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	// 예제 벡터 생성
	vector<int> vec = {1, 2, 3, 2, 4, 2, 5};
	// 벡터의 크기와 용량 확인
	// vec.size()는	 벡터의 현재 원소 개수를 반환
	// vec.capacity()는 벡터가 현재 할당된 메모리 용량을 반환
	cout << "Original vector: " << vec.size() << " elements, capacity: " << vec.capacity() << endl;

	// reverse <- 벡터의 원소 순서를 뒤집음
	reverse(vec.begin(), vec.end()); // 사용법: reverse(시작 이터레이터, 끝 이터레이터)
	cout << "Reversed vector: ";
	printVector(vec);

	// count <- 벡터에서 특정 값의 개수를 셈
	int count_of_2 = count(vec.begin(), vec.end(), 2); // 사용법: count(시작 이터레이터, 끝 이터레이터, 찾을 값)
	cout << "Count of 2: " << count_of_2 << endl;

	// max_element and min_element <- 벡터에서 최대값과 최소값을 찾음
	auto max_it = max_element(vec.begin(), vec.end()); // 사용법: max_element(시작 이터레이터, 끝 이터레이터)
	auto min_it = min_element(vec.begin(), vec.end()); // 사용법: min_element(시작 이터레이터, 끝 이터레이터)
	cout << "Max element: " << *max_it << endl; // 포인터로 반환되는 이유는 이터레이터이기 때문에 값에 접근하려면 역참조 연산자(*)를 사용해야 함
	cout << "Min element: " << *min_it << endl; // 포인터로 반환되는 이유는 이터레이터이기 때문에 값에 접근하려면 역참조 연산자(*)를 사용해야 함

	// unique (requires sorted vector) <- 벡터에서 중복된 원소를 제거
	sort(vec.begin(), vec.end()); // 사용법: sort(시작 이터레이터, 끝 이터레이터) sort를 사용하는 이유는 unique 함수가 인접한 중복 원소만 제거하기 때문
	                              // unique 함수가 인접하는 범위는 자신의 위치부터 바로 다음 위치까지이기 때문에
	                              // 정렬하지 않으면 중복된 원소가 인접하지 않을 수 있어 원하는 결과를 얻지 못함
								                // unique()는 요구사항이 아니지만, 중복 요소를 모두 제거하려면 정렬이 사실상 필요함 
								                // 정렬되어 있으면 필요없음
	auto unique_end = unique(vec.begin(), vec.end()); // 사용법: unique(시작 이터레이터, 끝 이터레이터)
	vec.erase(unique_end, vec.end()); // 벡터에서 중복 제거된 후의 끝 위치부터 원래 끝까지의 원소를 삭제
	                                  // 삭제하는 이유는 unique 함수가 중복된 원소를 제거한 후에도 벡터의 크기는 변하지 않기 때문
	cout << "Unique elements: ";
	printVector(vec);

	// remove (removes all occurrences of 2) <- 벡터에서 특정 값을 제거
	auto remove_end = remove(vec.begin(), vec.end(), 2); // 사용법: remove(시작 이터레이터, 끝 이터레이터, 제거할 값)
	vec.erase(remove_end, vec.end()); // 벡터에서 제거된 후의 끝 위치부터 원래 끝까지의 원소를 삭제
	                                  // 삭제하는 이유는 remove 함수가 실제로 원소를 삭제하지 않고, 제거된 후의 새로운 끝 위치를 반환하기 때문
	cout << "After removing 2: ";
	printVector(vec);

	return 0;
}
