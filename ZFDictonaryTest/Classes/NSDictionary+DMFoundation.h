//
//  NSDictionary+DMFoundation.h
//  linewebtoon_CN
//
//  Created by Stephen on 2018/8/5.
//  Copyright © 2018年 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (DMFoundation)

+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

- (NSObject *)objectOfAny:(NSArray *)array;

- (NSString *)stringOfAny:(NSArray *)array;

- (NSObject *)objectAtPath:(NSString *)path;

- (NSObject *)objectAtPath:(NSString *)path otherwise:(NSObject *)other;

- (NSObject *)objectAtPath:(NSString *)path separator:(NSString *)separator;

- (NSObject *)objectAtPath:(NSString *)path otherwise:(NSObject *)other separator:(NSString *)separator;

- (BOOL)boolAtPath:(NSString *)path;

- (BOOL)boolAtPath:(NSString *)path otherwise:(BOOL)other;

- (NSNumber *)numberAtPath:(NSString *)path;

- (NSNumber *)numberAtPath:(NSString *)path otherwise:(NSNumber *)other;

- (NSString *)stringAtPath:(NSString *)path;

- (NSString *)stringAtPath:(NSString *)path otherwise:(NSString *)other;

- (NSString *)stringForKey:(NSString *)path otherKey:(NSString *)other;

- (NSArray *)arrayAtPath:(NSString *)path;

- (NSArray *)arrayAtPath:(NSString *)path otherwise:(NSArray *)other;

- (NSMutableArray *)mutableArrayAtPath:(NSString *)path;

- (NSMutableArray *)mutableArrayAtPath:(NSString *)path otherwise:(NSMutableArray *)other;

- (NSDictionary *)dictAtPath:(NSString *)path;

- (NSDictionary *)dictAtPath:(NSString *)path otherwise:(NSDictionary *)other;

- (NSMutableDictionary *)mutableDictAtPath:(NSString *)path;

- (NSMutableDictionary *)mutableDictAtPath:(NSString *)path otherwise:(NSMutableDictionary *)other;

//- (NSObject *)objectForClass:(Class)clazz;

- (NSInteger)intForKey:(NSString *)key;

- (NSInteger)safeIntForKey:(NSString *)key;

- (NSInteger)safeIntForKey:(NSString *)key withSafeNum:(NSInteger)safenum;

- (BOOL)safeBoolForKey:(NSString *)key withSafeVale:(BOOL)safeValue;

- (BOOL)boolForKey:(NSString *)key;

- (float)floatForKey:(NSString *)key;

- (NSString *)stringForKey:(NSString *)key;

- (NSString *)safeStringForKey:(NSString *)key withSafeString:(NSString *)safeString;

- (double)safeDoubleForKey:(NSString *)key;

- (double)safeDoubleForKey:(NSString *)key withSafeNum:(double)safenum ;

- (CGPoint)pointForKey:(NSString *)key;

- (CGSize)sizeForKey:(NSString *)key;

- (CGRect)rectForKey:(NSString *)key;

- (NSMutableDictionary *)convertKeyValue:(NSDictionary *)keys;

@end


@interface NSDictionary (DMDeepMutableCopy)

- (NSMutableDictionary *)deepMutableCopy;

@end

@interface NSMutableDictionary (DMFoundation)

- (BOOL)setObject:(NSObject *)obj atPath:(NSString *)path;

- (BOOL)setObject:(NSObject *)obj atPath:(NSString *)path separator:(NSString *)separator;

- (BOOL)setKeyValues:(id)first, ...;

+ (NSMutableDictionary *)keyValues:(id)first, ...;

- (void)setInt:(NSInteger)value forKey:(NSString *)key;

- (void)setBool:(BOOL)value forKey:(NSString *)key;

- (void)setFloat:(float)value forKey:(NSString *)key;

- (void)setDouble:(double)value forKey:(NSString *)key;

- (void)setString:(NSString *)value forKey:(NSString *)key;

- (void)setPoint:(CGPoint)value forKey:(NSString *)key;

- (void)setSize:(CGSize)value forKey:(NSString *)key;

- (void)setRect:(CGRect)value forKey:(NSString *)key;

/**
 * Same as setObject:forKey:, but does not attempt to insert nil objects or keys
 */
- (void)safelysetObject:(id)object forKey:(id)key;

- (void)safelySetObjectSilence:(id)object forKey:(id)key;

@end
