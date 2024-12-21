/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
 */

@interface BKHIDEventDeliveryManagerServer : NSObject <BKHIDDomainServiceDelegate, BKSHIDEventDeliveryManagerServerInterface> {
    BKHIDEventDeliveryManager * _deliveryManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableIndexSet * _observerPIDs;
    BSMutableIntegerMap * _resolutionsByPID;
    <BKHIDEventDeliveryManagerServerRuleChangeAuthority> * _ruleChangeAuthority;
    BKHIDDomainServiceServer * _server;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)arg1;
- (void)connectionDidTerminate:(id)arg1 process:(id)arg2;
- (id)deliveryGraphDescription;
- (id)initWithDeliveryManager:(id)arg1 ruleChangeAuthority:(id)arg2;
- (oneway void)selectDeferringTargetForPredicate:(id)arg1;
- (oneway void)submitRuleChanges:(id)arg1;

@end