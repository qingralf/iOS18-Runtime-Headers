/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRCOperationSubclass, BRItemNotificationReceiving> {
    id /* block */  _evictionCompletionBlock;
    bool  _isFinished;
    BRCNotificationPipe * _pipe;
    struct { 
        unsigned long long sectionID; 
        char *function; 
        int line; 
    }  _section;
    BRCAccountSession * _session;
    brc_task_tracker * _tracker;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ evictionCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSession:(id)arg1 url:(id)arg2;
- (oneway void)invalidate;
- (void)main;
- (void)receiveProgressUpdates:(id)arg1 reply:(id /* block */)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id /* block */)arg4;
- (void)setEvictionCompletionBlock:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
