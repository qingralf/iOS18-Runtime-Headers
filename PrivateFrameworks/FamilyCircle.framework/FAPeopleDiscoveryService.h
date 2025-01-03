/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAPeopleDiscoveryService : NSObject <FAPeopleDiscoveryServiceProtocol> {
    RPPeopleDiscovery * _peopleDiscovery;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getNearbyPeople;
- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;

@end
