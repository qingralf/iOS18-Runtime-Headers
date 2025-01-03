/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SALocation *location;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *zoomLevel;

+ (id)mapViewItem;
+ (id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)location;
- (void)setAction:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setZoomLevel:(id)arg1;
- (id)zoomLevel;

@end
