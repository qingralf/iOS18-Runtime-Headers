/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSRegexCache : NSObject {
    NSMutableDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _regexCacheLock;
}

@property (nonatomic, retain) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)regexForString:(id)arg1;
- (id)regexForString:(id)arg1 atStart:(bool)arg2;
- (void)setCache:(id)arg1;

@end