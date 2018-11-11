#include <galaxy-explorer/AsteroidList.hpp>





AsteroidListItem::AsteroidListItem() {
	this->setNext(NULL);
	this->data = NULL;
} //since this is a class that extends outside of its own bounds. must use deep copy/deleting to move things 

AsteroidListItem::AsteroidListItem(Asteroid a) {
	next = NULL;
	data = a;
}

AsteroidListItem::~AsteroidListItem() {
    this->setNext(NULL);
    delete(data);
    
    
}

AsteroidList::AsteroidList() //constuctor but how does it work?
{
    this->head = NULL;
    //setting all data pointers to NULL
    //is an asteroidList contstructor 
    
    
    
}

AsteroidList::AsteroidList(const AsteroidList& src)
{
    const AsteroidListItem *ptr = src.head;
    AsteroidListItem *last = NULL;
    AsteroidListItem *nptr = NULL;
    head = NULL;
    while(ptr != NULL){
        nptr = new AsteroidListItem(ptr->data); //is that pointing to the correct place? 
        if(last == NULL) head.setNext(nptr);
        else last->setNext(nptr);
        ptr = ptr->getNext();
        last = nptr;
    }
        
    
    
	// The functions in this class are listed in a suggested order of implementation,
	// except for this one and the destructor (because you should put all your constructors together).
}

AsteroidList::~AsteroidList() {
    
    AsteroidListItem* ptr;
    while(head.getNext() != NULL){ //use getnext func
        const ptr = head;
        head = ptr->getNext();
        delete ptr->data;//first delete data to make sure no mem leaks
        delete ptr;
    }
    
	// The functions in this class are listed in a suggested order of implementation,
	// except for this one and the copy constructor (because you should put all your constructors together).
}

void AsteroidList::pushFront(Asteroid e) { //iterate linked list by one. so take the head and make it point to that new ptr 
    if(isEmpty()){
        
    }
    
    
}

Asteroid& AsteroidList::front() {
	return *(Asteroid*)nullptr;
}

const Asteroid& AsteroidList::front() const {
	return *(const Asteroid*)nullptr;
}

bool AsteroidList::isEmpty() const {
    if(head->getData() == NULL && head->getNext() == NULL)
	return true;
}

int AsteroidList::size() const {
    int count;
    const AsteroidListItem * tptr = head;
    while (tptr != NULL){
        count++;
        tptr = tptr->getNext();
    }
	return count;
}

AsteroidListItem* AsteroidList::beforeBegin() {
    
    
    
	return nullptr;
}

const AsteroidListItem* AsteroidList::beforeBegin() const {
	return nullptr;
}

AsteroidListItem* AsteroidList::begin() {
	return nullptr;
}

const AsteroidListItem* AsteroidList::begin() const {
	return nullptr;
}

AsteroidListItem* AsteroidList::beforeEnd() {
	return nullptr;
}

const AsteroidListItem* AsteroidList::beforeEnd() const {
	return nullptr;
}

AsteroidListItem* AsteroidList::end() {
	return nullptr;
        
        
}

const AsteroidListItem* AsteroidList::end() const {
	return nullptr;
        
        
}

AsteroidListItem* AsteroidList::insertAfter(AsteroidListItem* prev, Asteroid e) {
	return nullptr;
        
        
}

AsteroidListItem* AsteroidList::insertAfter(AsteroidListItem* prev, const AsteroidList& others) {
	return nullptr;
        
        //where are the header files???? and why do these return null 
}

AsteroidListItem* AsteroidList::eraseAfter(AsteroidListItem* prev) {
	return nullptr;
        
        
}

void AsteroidList::clear() {
}

AsteroidList& AsteroidList::operator=(const AsteroidList& src) {
	return *(AsteroidList*)nullptr;
}
