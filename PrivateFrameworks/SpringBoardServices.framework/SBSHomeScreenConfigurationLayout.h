/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHomeScreenConfigurationLayout : NSObject <BSXPCSecureCoding, NSCopying> {
    NSArray * _dockItems;
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *dockItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dockItems;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithItems:(id)arg1 dockItems:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
