- 아스키코드표
![아스키코드](https://user-images.githubusercontent.com/81306023/125579200-83769c7c-a90e-4216-ad83-4619523de0b6.png)


- #include <algorithm> 이용하면 최대,최솟값 쉽게 도출 가능
  
  ex)
  
  int maximum = max(a, a+50);
  // maximum 의 값은 배열 a[0]에서 a[49]까지의 값 중 가장 작은 값으로 설정됨

  
  
  
- string 의 array화
  
  	strcpy(s, tmp.c_str()); //array s에 string tmp를 옮겨 넣는다.
  
 - 띄어쓰기가 있는 string을 하나의 string으로 만들기
    
	string tmp;
    
	getline(cin, tmp);
	
- header file <algorithm> 사용하기
	string 의 reverse화가 가능
	- string tmp = "alpha";
	- reverse(tmp.begin(), tmp.end());
	
- if문 간단하게 사용하기
	-'조건문' ? '조건문이 맞을시 실행될 명령문' : '조건문이 틀릴시 실행될 명령문'
	-ex)
	-int b > int a? cout << "b가 a보다 크다" : "b가 a보다 작다"
	
- quick sort를 간단하기 적용하기
	// #include <algorithm> 적용 후
	-sort (arr명, arr명+길이) 사용시
	-arr[0] ~ arr[길이]인 배열이 자동으로 정렬된다.
    
  
  
  //아직 못푼 문제들
https://www.acmicpc.net/problem/1547 공
https://www.acmicpc.net/problem/9093  단어 뒤집기
https://www.acmicpc.net/problem/3059  등장하지 않는 문자의 합
https://www.acmicpc.net/problem/1357  뒤집힌 덧셈
연속구간
가장 많은 글자 (입력을 못넣겟음)
