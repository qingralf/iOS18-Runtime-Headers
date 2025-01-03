/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    bool  _authError;
    NSMutableSet * _principalURLs;
    NSURL * _urlBeingExamined;
    NSMutableSet * _urlsToExamine;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didReceiveAuthenticationError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *principalURLs;
@property (nonatomic, readonly) NSSet *resultPrincipalURLs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *urlBeingExamined;
@property (nonatomic, retain) NSMutableSet *urlsToExamine;

- (void).cxx_destruct;
- (void)_fetchNextURL;
- (void)_finishWithError:(id)arg1;
- (void)cancelTaskGroup;
- (bool)didReceiveAuthenticationError;
- (id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3;
- (id)principalURLs;
- (id)resultPrincipalURLs;
- (void)setPrincipalURLs:(id)arg1;
- (void)setUrlBeingExamined:(id)arg1;
- (void)setUrlsToExamine:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)urlBeingExamined;
- (id)urlsToExamine;

@end
