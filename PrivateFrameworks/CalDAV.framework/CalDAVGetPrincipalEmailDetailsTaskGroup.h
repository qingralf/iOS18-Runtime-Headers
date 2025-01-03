/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    CalDAVPrincipalEmailDetailsResult * _principalResult;
    NSURL * _principalURL;
}

@property (nonatomic, readonly, retain) NSSet *addresses;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CalDAVPrincipalEmailDetailsResult *principalResult;
@property (nonatomic, retain) NSURL *principalURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_processPropFind:(id)arg1;
- (id)addresses;
- (id)displayName;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)principalResult;
- (id)principalURL;
- (void)setPrincipalResult:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
