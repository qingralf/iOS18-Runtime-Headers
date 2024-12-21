/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
 */

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol> {
    AXPTranslationObject * translation;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AXPTranslationObject *translation;

+ (id)platformElementWithTranslationObject:(id)arg1;
+ (id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2;

- (void).cxx_destruct;
- (void)setTranslation:(id)arg1;
- (id)translation;

@end