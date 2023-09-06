# 링크드 리스트 기반 큐 구현

## 배열 기반 원형 큐와 차이점
배열 기반 원형 큐가 front, rear을 인덱스로 활용한 것과 다르게 링크드 리스트 기반은 노드 구조체를 사용한다.  
링크드 리스트 성질을 그대로 사용하기 때문에 특이사항은 없다.  
front == NULL일 경우 큐가 비어있으므로 확인이 간단하다. 첫 번째 데이터를 삽입할 때는 head와 tail을 가진 링크드 리스드와 마찬가지로 front, rear이 같은 노드를 가리키게 되는 것에 유의해야 한다.  
추가 데이터가 삽입될 경우 front 노드는 변경할 필요 없이 rear만 queue -> rear -> next로 다음 노드를 가리키게 한 뒤 queue -> rear = newNode;하면 된다.