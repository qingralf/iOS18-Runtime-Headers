/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCAppLibrary * _appLibrary;
    unsigned long long  _chainedRecordsCount;
    BRCServerItem * _serverItem;
    <BRCSyncUpCallbackProtocol> * _syncUpCallback;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCItemID *rootItemID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performPCSChainBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1 sessionContext:(id)arg2 syncUpCallback:(id)arg3;
- (void)main;
- (id)rootItemID;

@end
