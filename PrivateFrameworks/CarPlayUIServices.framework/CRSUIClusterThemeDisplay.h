/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIClusterThemeDisplay : NSObject <BSXPCSecureCoding> {
    unsigned long long  _displayType;
    NSString * _identifier;
    NSArray * _layouts;
    bool  _requiresDarkAppearance;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *layouts;
@property (nonatomic, readonly) bool requiresDarkAppearance;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)displayType;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayType:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 requiresDarkAppearance:(bool)arg4 layouts:(id)arg5;
- (id)layouts;
- (bool)requiresDarkAppearance;
- (struct CGSize { double x1; double x2; })size;

@end
