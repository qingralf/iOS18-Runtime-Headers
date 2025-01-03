/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASWebsiteNameFetchOperation : NSOperation {
    NSString * _domain;
    WBSPasswordManagerWebsiteMetadataEntry * _metadataEntry;
    _ASWebsiteNameProvider * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        bool isCancelled; 
        bool isExecuting; 
        bool isFinished; 
    }  _state;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) WBSPasswordManagerWebsiteMetadataEntry *metadataEntry;

- (void).cxx_destruct;
- (void)_finish;
- (void)_run;
- (void)cancel;
- (id)debugDescription;
- (id)domain;
- (id)init;
- (id)initWithDomain:(id)arg1 metadataEntry:(id)arg2 provider:(id)arg3;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (id)metadataEntry;
- (void)start;

@end
