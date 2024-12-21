/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMLModelRegistry : NSObject {
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _modelMap;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _signpost;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableDictionary *modelMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long signpost;

- (void).cxx_destruct;
- (id)init;
- (id)loadModelAtURL:(id)arg1 options:(unsigned long long)arg2 error:(out id*)arg3;
- (id)log;
- (id)modelForKey:(id)arg1;
- (id)modelMap;
- (id)queue;
- (void)registerModel:(id)arg1 forKey:(id)arg2;
- (void)setLog:(id)arg1;
- (void)setModelMap:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSignpost:(unsigned long long)arg1;
- (unsigned long long)signpost;
- (void)unregisterModelForKey:(id)arg1;

@end