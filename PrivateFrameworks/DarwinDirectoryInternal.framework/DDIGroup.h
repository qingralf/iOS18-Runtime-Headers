/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DarwinDirectoryInternal.framework/DarwinDirectoryInternal
 */

@interface DDIGroup : NSObject {
    NSMutableSet * _aliases;
    NSString * _fullName;
    unsigned int  _gid;
    NSString * _name;
    NSMutableSet * _nestedGroups;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSMutableSet *aliases;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableSet *nestedGroups;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)groupWithUUID:(id)arg1 gid:(unsigned int)arg2 name:(id)arg3 fullName:(id)arg4;

- (void).cxx_destruct;
- (id)aliases;
- (id)fullName;
- (unsigned int)gid;
- (id)name;
- (id)nestedGroups;
- (void)setAliases:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setNestedGroups:(id)arg1;
- (id)uuid;

@end
