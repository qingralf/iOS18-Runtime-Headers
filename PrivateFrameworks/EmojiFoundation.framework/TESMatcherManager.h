/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface TESMatcherManager : NSObject {
    NSMutableDictionary * _matcherCache;
    NSLock * _matcherCacheLock;
}

@property (nonatomic, retain) NSMutableDictionary *matcherCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_getOrCreateMatcherForLocale:(id)arg1;
- (id)init;
- (id)matcherCache;
- (id)matcherForLocale:(id)arg1;
- (void)setMatcherCache:(id)arg1;

@end
