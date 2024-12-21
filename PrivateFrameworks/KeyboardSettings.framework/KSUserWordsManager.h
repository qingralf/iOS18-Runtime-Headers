/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSUserWordsManager : NSObject {
    NSArray * _cache;
    NSMutableArray * _observers;
    _KSTextReplacementClientStore * _textReplacementStore;
}

@property (nonatomic, retain) NSArray *cache;
@property (nonatomic, readonly, retain) NSArray *entries;

- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)addObserver:(id /* block */)arg1;
- (id)cache;
- (void)dealloc;
- (id)entries;
- (id)init;
- (void)notifyObserversOfChange;
- (void)removeObserver:(id)arg1;
- (void)requestSync;
- (void)setCache:(id)arg1;

@end