/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoHomeIntents.framework/NanoHomeIntents
 */

@interface NHOLogging : NSObject {
    NSDictionary * _categoryMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _logs;
}

- (void).cxx_destruct;
- (id)init;
- (id)logForCategory:(unsigned long long)arg1;

@end