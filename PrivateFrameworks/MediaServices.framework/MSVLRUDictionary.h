/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVLRUDictionary : NSObject <NSCopying> {
    <MSVLRUDictionaryDelegate> * _delegate;
    NSMutableDictionary * _dictionary;
    MSVLRUDictionaryNode * _head;
    long long  _maximumCapacity;
    MSVLRUDictionaryNode * _tail;
    long long  _transactionCount;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic) <MSVLRUDictionaryDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (nonatomic, retain) MSVLRUDictionaryNode *head;
@property (nonatomic) long long maximumCapacity;
@property (nonatomic, retain) MSVLRUDictionaryNode *tail;
@property (nonatomic) long long transactionCount;

- (void).cxx_destruct;
- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_shrinkToCapacity;
- (id)allKeys;
- (id)allValues;
- (void)beginTransaction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)delegate;
- (id)description;
- (id)dictionary;
- (void)endTransaction;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)head;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maximumCapacity;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)performTransaction:(id /* block */)arg1;
- (void)pokeKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setMaximumCapacity:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setTail:(id)arg1;
- (void)setTransactionCount:(long long)arg1;
- (id)tail;
- (long long)transactionCount;

@end
