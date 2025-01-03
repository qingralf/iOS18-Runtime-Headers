/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSURL * _containerURL;
    NSString * _previousSyncToken;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CoreDAVContainerInfoSyncProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)containerItemClass;
- (id)copyContainerParserMappings;
- (id)delegate;
- (id)description;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
