/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNTranscriptObservingProvider : LNTranscriptProvider {
    <LNTranscriptObservingProviderDelegate> * _delegate;
    <LNNextActionObserverProtocol> * _observer;
}

@property (nonatomic) <LNTranscriptObservingProviderDelegate> *delegate;
@property (nonatomic, retain) <LNNextActionObserverProtocol> *observer;

+ (id)xpcInterface;

- (void).cxx_destruct;
- (void)configureConnection:(id)arg1;
- (id)delegate;
- (id)initWithObserver:(id)arg1;
- (id)observer;
- (void)setDelegate:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)startObservingNextActionStreamWithCompletion:(id /* block */)arg1;
- (void)stopObservingNextActionStreamWithConnectionUUID:(id)arg1 completion:(id /* block */)arg2;

@end