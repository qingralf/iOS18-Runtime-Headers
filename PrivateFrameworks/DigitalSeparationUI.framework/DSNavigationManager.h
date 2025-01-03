/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI
 */

@interface DSNavigationManager : NSObject {
    NSArray * _detailControllerPanes;
    NSArray * _panesRequiringNetwork;
    NSDictionary * _reviewDeviceAccessChapters;
    NSArray * _reviewDeviceAccessNavigationOrder;
    NSDictionary * _safetyCheckChaptersWifiSync;
    NSArray * _safetyCheckNavigationOrderWifiSync;
    NSDictionary * _safetyResetChapters;
    NSDictionary * _safetyResetChaptersDTO;
    NSArray * _safetyResetNavigationOrder;
    NSArray * _safetyResetNavigationOrderDTO;
    NSDictionary * _sharingActivityChapters;
    NSDictionary * _sharingActivityChaptersDTO;
    NSArray * _sharingActivityNavigationOrder;
    NSArray * _sharingActivityNavigationOrderDTO;
}

@property (nonatomic, retain) NSArray *detailControllerPanes;
@property (nonatomic, retain) NSArray *panesRequiringNetwork;
@property (nonatomic, retain) NSDictionary *reviewDeviceAccessChapters;
@property (nonatomic, retain) NSArray *reviewDeviceAccessNavigationOrder;
@property (nonatomic, retain) NSDictionary *safetyCheckChaptersWifiSync;
@property (nonatomic, retain) NSArray *safetyCheckNavigationOrderWifiSync;
@property (nonatomic, retain) NSDictionary *safetyResetChapters;
@property (nonatomic, retain) NSDictionary *safetyResetChaptersDTO;
@property (nonatomic, retain) NSArray *safetyResetNavigationOrder;
@property (nonatomic, retain) NSArray *safetyResetNavigationOrderDTO;
@property (nonatomic, retain) NSDictionary *sharingActivityChapters;
@property (nonatomic, retain) NSDictionary *sharingActivityChaptersDTO;
@property (nonatomic, retain) NSArray *sharingActivityNavigationOrder;
@property (nonatomic, retain) NSArray *sharingActivityNavigationOrderDTO;

- (void).cxx_destruct;
- (id)deepLinkToPane:(Class)arg1 inFlow:(long long)arg2;
- (id)detailControllerPanes;
- (id)init;
- (bool)isDTOActive;
- (id)navigationChaptersForFlowType:(long long)arg1;
- (id)navigationForURL:(id)arg1;
- (id)navigationOrderForFlowType:(long long)arg1;
- (id)panesRequiringNetwork;
- (id)restoredDTONavigationOrder:(long long)arg1 withPath:(id)arg2;
- (id)restoredDeviceAccessNavigationOrder:(long long)arg1;
- (id)reviewDeviceAccessChapters;
- (id)reviewDeviceAccessNavigationOrder;
- (id)safetyCheckChaptersWifiSync;
- (id)safetyCheckNavigationOrderWifiSync;
- (id)safetyResetChapters;
- (id)safetyResetChaptersDTO;
- (id)safetyResetNavigationOrder;
- (id)safetyResetNavigationOrderDTO;
- (void)setDetailControllerPanes:(id)arg1;
- (void)setPanesRequiringNetwork:(id)arg1;
- (void)setReviewDeviceAccessChapters:(id)arg1;
- (void)setReviewDeviceAccessNavigationOrder:(id)arg1;
- (void)setSafetyCheckChaptersWifiSync:(id)arg1;
- (void)setSafetyCheckNavigationOrderWifiSync:(id)arg1;
- (void)setSafetyResetChapters:(id)arg1;
- (void)setSafetyResetChaptersDTO:(id)arg1;
- (void)setSafetyResetNavigationOrder:(id)arg1;
- (void)setSafetyResetNavigationOrderDTO:(id)arg1;
- (void)setSharingActivityChapters:(id)arg1;
- (void)setSharingActivityChaptersDTO:(id)arg1;
- (void)setSharingActivityNavigationOrder:(id)arg1;
- (void)setSharingActivityNavigationOrderDTO:(id)arg1;
- (id)sharingActivityChapters;
- (id)sharingActivityChaptersDTO;
- (id)sharingActivityNavigationOrder;
- (id)sharingActivityNavigationOrderDTO;
- (bool)shouldIngestURL:(id)arg1;
- (Class)startingClassForURL:(id)arg1;
- (Class)topViewControllerForUnorderedClass:(Class)arg1;

@end
