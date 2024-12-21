/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSOSManager : NSObject <HDSOSManagerShim>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isAllowedToMessageSOSContacts;
- (void)setIsAllowedToMessageSOSContacts;
- (id)sosContactManager;

@end