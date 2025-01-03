/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener> {
    TUCallCenter * _callCenter;
}

@property (nonatomic, readonly) TUCallCenter *callCenter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorForUnableToCastDialRequest:(id)arg1;
+ (id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2;

- (void).cxx_destruct;
- (id)callCenter;
- (id)init;
- (id)initWithCallCenter:(id)arg1;
- (id)openDialRequest:(id)arg1 withScheduler:(id)arg2;

@end
