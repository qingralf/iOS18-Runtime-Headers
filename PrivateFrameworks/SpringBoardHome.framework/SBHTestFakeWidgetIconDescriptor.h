/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHTestFakeWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor> {
    SBHCustomIconElement * _element;
    NSString * _sizeClass;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBHCustomIconElement *element;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sizeClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)element;
- (id)init;
- (id)initWithElement:(id)arg1 sizeClass:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sbh_iconDescriptorType;
- (bool)sbh_isValidWithError:(id*)arg1;
- (id)sizeClass;

@end