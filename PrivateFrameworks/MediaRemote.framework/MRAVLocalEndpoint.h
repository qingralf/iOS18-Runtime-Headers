/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint <MRGroupSessionEligibilityObserver>

@property (nonatomic, readonly) MRAVRoutingDiscoverySession *audioDiscoverySession;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MRGroupSessionEligibilityMonitor *groupSessionEligibilityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedLocalEndpoint;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;

- (id)audioDiscoverySession;
- (bool)canModifyGroupMembership;
- (bool)groupContainsDiscoverableGroupLeader;
- (id)groupLeader;
- (id)groupSessionEligibilityMonitor;
- (id)groupSessionInfo;
- (void)groupSessionMonitor:(id)arg1 statusDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)handleActiveGroupSessionDidChangeNotification:(id)arg1;
- (bool)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (void)requestGroupSessionWithDetails:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

@end