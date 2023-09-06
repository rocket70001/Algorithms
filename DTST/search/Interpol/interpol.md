# 보간 정렬

## Interpolation
인터폴레이션, 보간이란 두 개의 점이 주어졌을 때 두 점의 위치를 기반으로 두 점 가운데 놓인 점을 두 점의 위치를 통해 추측하는 기법이다.  
보간 정렬은 정렬된 배열에서 인덱스 i와 해당 인덱스가 가리키는 값 arr[i]이 배열 안에서 유의미한 비례관계에 있다고 가정한다.  
따라서 다음과 같은 비례식이 성립한다.  
low는 탐색 범위의 시작 인덱스, high는 끝 인덱스이며 i는 타겟 인덱스이다.  
A = arr[high] - arr[low]이고 Q = arr[i] - arr[low]일때,  
A : Q = (high - low) : (i - low)  
i = Q / A(high - low) + low  
이때 찾고자 하는 데이터의 값 arr[i] == x라면,  
i = x - arr[low] / arr[high] - arr[low] * (high - low) + low이다.  
이렇게 하면 값 arr[i] == x를 삽입해 탐색위치 i를 구할 수 있다.
