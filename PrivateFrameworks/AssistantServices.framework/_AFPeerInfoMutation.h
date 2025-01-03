/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {
    NSString * _aceVersion;
    NSString * _assistantIdentifier;
    AFPeerInfo * _base;
    NSString * _buildVersion;
    NSString * _homeKitAccessoryIdentifier;
    NSString * _idsDeviceUniqueIdentifier;
    NSString * _idsIdentifier;
    bool  _isCommunalDevice;
    bool  _isDeviceOwnedByCurrentUser;
    bool  _isLocationSharingDevice;
    bool  _isSiriCloudSyncEnabled;
    NSString * _mediaRouteIdentifier;
    NSString * _mediaSystemIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIsDeviceOwnedByCurrentUser : 1; 
        unsigned int hasAssistantIdentifier : 1; 
        unsigned int hasSharedUserIdentifier : 1; 
        unsigned int hasIdsIdentifier : 1; 
        unsigned int hasIdsDeviceUniqueIdentifier : 1; 
        unsigned int hasRapportEffectiveIdentifier : 1; 
        unsigned int hasHomeKitAccessoryIdentifier : 1; 
        unsigned int hasMediaSystemIdentifier : 1; 
        unsigned int hasMediaRouteIdentifier : 1; 
        unsigned int hasIsCommunalDevice : 1; 
        unsigned int hasRoomName : 1; 
        unsigned int hasName : 1; 
        unsigned int hasProductType : 1; 
        unsigned int hasBuildVersion : 1; 
        unsigned int hasUserInterfaceIdiom : 1; 
        unsigned int hasAceVersion : 1; 
        unsigned int hasIsLocationSharingDevice : 1; 
        unsigned int hasIsSiriCloudSyncEnabled : 1; 
        unsigned int hasMyriadTrialTreatment : 1; 
    }  _mutationFlags;
    NSString * _myriadTrialTreatment;
    NSString * _name;
    NSString * _productType;
    NSString * _rapportEffectiveIdentifier;
    NSString * _roomName;
    NSString * _sharedUserIdentifier;
    NSString * _userInterfaceIdiom;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAceVersion;
- (id)getAssistantIdentifier;
- (id)getBuildVersion;
- (id)getHomeKitAccessoryIdentifier;
- (id)getIdsDeviceUniqueIdentifier;
- (id)getIdsIdentifier;
- (bool)getIsCommunalDevice;
- (bool)getIsDeviceOwnedByCurrentUser;
- (bool)getIsLocationSharingDevice;
- (bool)getIsSiriCloudSyncEnabled;
- (id)getMediaRouteIdentifier;
- (id)getMediaSystemIdentifier;
- (id)getMyriadTrialTreatment;
- (id)getName;
- (id)getProductType;
- (id)getRapportEffectiveIdentifier;
- (id)getRoomName;
- (id)getSharedUserIdentifier;
- (id)getUserInterfaceIdiom;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAceVersion:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setHomeKitAccessoryIdentifier:(id)arg1;
- (void)setIdsDeviceUniqueIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setIsCommunalDevice:(bool)arg1;
- (void)setIsDeviceOwnedByCurrentUser:(bool)arg1;
- (void)setIsLocationSharingDevice:(bool)arg1;
- (void)setIsSiriCloudSyncEnabled:(bool)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setMyriadTrialTreatment:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRapportEffectiveIdentifier:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSharedUserIdentifier:(id)arg1;
- (void)setUserInterfaceIdiom:(id)arg1;

@end
