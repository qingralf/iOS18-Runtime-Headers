/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoHomeIntents.framework/NanoHomeIntents
 */

@interface NHOAccessoryIntent : NSObject {
    void _accessoriesAndScenes;
    void _accessoryID;
    void _accessoryName;
    void _homeID;
    void _homeName;
    void _icon;
    void _isSmartStack;
    void _requestConfirmationIcon;
    void _requestConfirmationText;
    void _serviceType;
    void _useHomeKitRecommendations;
}

@property (nonatomic, copy) NSString *accessoriesAndScenes;
@property (nonatomic, copy) NSString *accessoryID;
@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *homeID;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic) bool useHomeKitRecommendations;

- (void).cxx_destruct;
- (id)accessoriesAndScenes;
- (id)accessoryID;
- (id)accessoryName;
- (id)description;
- (id)homeID;
- (id)homeName;
- (id)icon;
- (id)init;
- (id)serviceType;
- (void)setAccessoriesAndScenes:(id)arg1;
- (void)setAccessoryID:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setHomeID:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setUseHomeKitRecommendations:(bool)arg1;
- (bool)useHomeKitRecommendations;

@end