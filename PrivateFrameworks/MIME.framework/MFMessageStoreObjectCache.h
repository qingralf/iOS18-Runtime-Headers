/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageStoreObjectCache : NSObject {
    NSMutableDictionary * _cache;
    unsigned long long  _capacity;
    id /* block */  _comparator;
    id /* block */  _keyGenerator;
    NSLock * _lock;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, copy) id /* block */ keyGenerator;

- (void).cxx_destruct;
- (void)_nts_evictObject;
- (void)_nts_setObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;
- (id /* block */)comparator;
- (id)debugDescription;
- (id)description;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id /* block */)keyGenerator;
- (id)objectForMessage:(id)arg1 kind:(long long)arg2;
- (void)removeAllObjectsForMessage:(id)arg1;
- (void)removeObjectForMessage:(id)arg1 kind:(long long)arg2;
- (void)setComparator:(id /* block */)arg1;
- (void)setKeyGenerator:(id /* block */)arg1;
- (void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;

@end
