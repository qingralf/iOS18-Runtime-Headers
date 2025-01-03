/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDLostModeManager : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    bool  _lost;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isLostOrNeedsExitAuth;
@property (getter=isLost, readonly) bool lost;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedManager;

- (id)attributeDescriptions;
- (id)init;
- (bool)isLost;
- (bool)isLostOrNeedsExitAuth;

@end
