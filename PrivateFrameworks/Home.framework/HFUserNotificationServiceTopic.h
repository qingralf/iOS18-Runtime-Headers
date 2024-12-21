/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {
    NSSet * _accessoryCategoryTypes;
    <HFIconDescriptor> * _iconDescriptor;
    HFAccessoryType * _iconForAccessoryType;
    bool  _isMatter;
    NSSet * _serviceTypes;
    NSString * _topicName;
    NSString * _topicNameLocalizationKey;
}

@property (nonatomic, readonly, copy) NSSet *accessoryCategoryTypes;
@property (nonatomic, readonly) HFAccessoryType *accessoryType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isMatter;
@property (nonatomic, readonly, copy) NSSet *serviceTypes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topicName;
@property (nonatomic, readonly, copy) NSString *topicNameLocalizationKey;

+ (id)_announceTopic;
+ (id)_applianceTopic;
+ (id)_cameraTopic;
+ (id)_energyTopic;
+ (id)_safetyAndSecurityTopic;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessoryCategoryTypes;
- (id)accessoryType;
- (unsigned long long)hash;
- (id)iconDescriptor;
- (id)identifier;
- (id)init;
- (id)initWithServiceType:(id)arg1 topicNameLocalizationKey:(id)arg2;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicNameLocalizationKey:(id)arg3 iconDescriptor:(id)arg4;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicNameLocalizationKey:(id)arg3 iconForAccessoryType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMatter;
- (id)serviceTypes;
- (void)setIsMatter:(bool)arg1;
- (id)topicName;
- (id)topicNameLocalizationKey;

@end