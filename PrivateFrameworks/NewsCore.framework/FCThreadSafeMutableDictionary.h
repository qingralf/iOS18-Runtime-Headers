/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCThreadSafeMutableDictionary : NSObject {
    NSMutableDictionary * _dictionary;
    NFUnfairLock * _lock;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *allValues;
@property (readonly) unsigned long long count;
@property (readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSDictionary *readOnlyDictionary;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEmpty;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)readOnlyDictionary;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)readWriteWithAccessor:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)subdictionaryForKeys:(id)arg1;
- (id)subdictionaryForKeys:(id)arg1 passingTest:(id /* block */)arg2;

@end
