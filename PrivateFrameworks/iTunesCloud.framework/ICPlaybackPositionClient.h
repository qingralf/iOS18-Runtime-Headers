/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPlaybackPositionClient : NSObject <ICPlaybackPositionService> {
    NSXPCConnection * _connection;
    ICCloudServerListenerEndpointProvider * _listenerEndpointProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)connection;
- (void)deletePlaybackPositionEntities;
- (void)deletePlaybackPositionEntitiesFromLibraryWithIdentifier:(id)arg1;
- (void)deletePlaybackPositionEntity:(id)arg1;
- (void)getLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getLocalPlaybackPositionForEntityIdentifiers:(id)arg1 forDomain:(id)arg2 fromLibraryWithIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)init;
- (void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)synchronizePlaybackPositions;
- (void)synchronizePlaybackPositionsForLibraryWithIdentifier:(id)arg1 forDomain:(id)arg2 isCheckpoint:(bool)arg3;
- (void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;

@end