/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STLocalOrganization : STCoreOrganization <STSerializableMappedObject>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) STLocalOrganizationSettings *settings;
@property (readonly) Class superclass;

+ (id)fetchOrCreateLocalOrganizationWithContext:(id)arg1 error:(id*)arg2;
+ (id)fetchRequest;
+ (id)serializableClassName;

@end