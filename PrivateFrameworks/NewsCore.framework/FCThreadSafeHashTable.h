/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCThreadSafeHashTable : NSObject {
    NSHashTable * _hashTable;
    NFUnfairLock * _lock;
}

@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;

+ (id)hashTableWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;

@end
