/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileResourceMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_initWithQueue:(id)arg1;
- (void)_registerLaunchOnDemand;
- (void)_startSession;
- (void)_stopSession;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;

@end