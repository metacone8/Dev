CC = g++  # C++ 컴파일러
CFLAGS = -std=c++17 -Wall -IProject2  # 절대 경로 사용
LDFLAGS =  # 링커 옵션 (라이브러리 사용 안 함, 직접 오브젝트 파일 링크)

# 빌드할 타겟 파일
TARGET = Project1

# Project1의 소스 파일
PROJECTA_SRC = Project1/main.cpp

# Project2의 소스 파일
PROJECTB_SRC = Project2/lib.cpp

# Project2의 오브젝트 파일
PROJECTB_OBJ = Project2/lib.o

# 최종 빌드 규칙
all: $(TARGET)

$(TARGET): $(PROJECTA_SRC) $(PROJECTB_OBJ)
	$(CC) $(PROJECTA_SRC) $(PROJECTB_OBJ) -o $(TARGET) $(LDFLAGS)

# Project2의 오브젝트 파일 빌드 규칙
Project2/lib.o: Project2/lib.cpp
	$(CC) $(CFLAGS) -c Project2/lib.cpp -o Project2/lib.o

# 클린 업 규칙
clean:
	rm -f $(TARGET) Project2/lib.o