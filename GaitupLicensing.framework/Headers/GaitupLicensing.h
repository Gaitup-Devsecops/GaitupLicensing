#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GaitupLicensingReportUsage, GaitupLicensingKotlinThrowable, GaitupLicensingKotlinArray<T>, GaitupLicensingKotlinException, GaitupLicensingKotlinRuntimeException, GaitupLicensingKotlinIllegalStateException, GaitupLicensingKotlinx_serialization_coreSerializersModule, GaitupLicensingKotlinx_serialization_coreSerialKind, GaitupLicensingKotlinNothing, GaitupLicensingKotlinx_serialization_coreUpdateMode, GaitupLicensingKotlinEnum<E>;

@protocol GaitupLicensingKotlinx_serialization_coreKSerializer, GaitupLicensingKotlinx_serialization_coreEncoder, GaitupLicensingKotlinx_serialization_coreSerialDescriptor, GaitupLicensingKotlinx_serialization_coreSerializationStrategy, GaitupLicensingKotlinx_serialization_coreDecoder, GaitupLicensingKotlinx_serialization_coreDeserializationStrategy, GaitupLicensingKotlinIterator, GaitupLicensingKotlinx_serialization_coreCompositeEncoder, GaitupLicensingKotlinAnnotation, GaitupLicensingKotlinx_serialization_coreCompositeDecoder, GaitupLicensingKotlinx_serialization_coreSerializersModuleCollector, GaitupLicensingKotlinKClass, GaitupLicensingKotlinComparable, GaitupLicensingKotlinKDeclarationContainer, GaitupLicensingKotlinKAnnotatedElement, GaitupLicensingKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface GaitupLicensingBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface GaitupLicensingBase (GaitupLicensingBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface GaitupLicensingMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GaitupLicensingMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorGaitupLicensingKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface GaitupLicensingNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface GaitupLicensingByte : GaitupLicensingNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface GaitupLicensingUByte : GaitupLicensingNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface GaitupLicensingShort : GaitupLicensingNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface GaitupLicensingUShort : GaitupLicensingNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface GaitupLicensingInt : GaitupLicensingNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface GaitupLicensingUInt : GaitupLicensingNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface GaitupLicensingLong : GaitupLicensingNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface GaitupLicensingULong : GaitupLicensingNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface GaitupLicensingFloat : GaitupLicensingNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface GaitupLicensingDouble : GaitupLicensingNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface GaitupLicensingBoolean : GaitupLicensingNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GaithubLicensing")))
@interface GaitupLicensingGaithubLicensing : GaitupLicensingBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)initializeCustomerId:(NSString *)customerId appVersion:(NSString *)appVersion __attribute__((swift_name("initialize(customerId:appVersion:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReportUsageReportTypeId:(NSString *)reportTypeId physilogIds:(NSArray<NSString *> *)physilogIds completionHandler:(void (^)(GaitupLicensingBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendReportUsage(reportTypeId:physilogIds:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface GaitupLicensingPlatform : GaitupLicensingBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportUsage")))
@interface GaitupLicensingReportUsage : GaitupLicensingBase
- (instancetype)initWithCustomerId:(NSString *)customerId reportTypeId:(NSString *)reportTypeId physilogIds:(NSArray<NSString *> *)physilogIds createdAt:(NSString *)createdAt deviceId:(NSString *)deviceId licensingLibraryVersion:(NSString *)licensingLibraryVersion mobilePlatform:(NSString *)mobilePlatform mobileAppVersion:(NSString *)mobileAppVersion __attribute__((swift_name("init(customerId:reportTypeId:physilogIds:createdAt:deviceId:licensingLibraryVersion:mobilePlatform:mobileAppVersion:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (GaitupLicensingReportUsage *)doCopyCustomerId:(NSString *)customerId reportTypeId:(NSString *)reportTypeId physilogIds:(NSArray<NSString *> *)physilogIds createdAt:(NSString *)createdAt deviceId:(NSString *)deviceId licensingLibraryVersion:(NSString *)licensingLibraryVersion mobilePlatform:(NSString *)mobilePlatform mobileAppVersion:(NSString *)mobileAppVersion __attribute__((swift_name("doCopy(customerId:reportTypeId:physilogIds:createdAt:deviceId:licensingLibraryVersion:mobilePlatform:mobileAppVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString *licensingLibraryVersion __attribute__((swift_name("licensingLibraryVersion")));
@property (readonly) NSString *mobileAppVersion __attribute__((swift_name("mobileAppVersion")));
@property (readonly) NSString *mobilePlatform __attribute__((swift_name("mobilePlatform")));
@property (readonly) NSArray<NSString *> *physilogIds __attribute__((swift_name("physilogIds")));
@property (readonly) NSString *reportTypeId __attribute__((swift_name("reportTypeId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportUsage.Companion")))
@interface GaitupLicensingReportUsageCompanion : GaitupLicensingBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GaitupLicensingKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GaithubApi")))
@interface GaitupLicensingGaithubApi : GaitupLicensingBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReportUsage:(GaitupLicensingReportUsage *)reportUsage completionHandler:(void (^)(GaitupLicensingBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("send(reportUsage:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GaithubApi.Companion")))
@interface GaitupLicensingGaithubApiCompanion : GaitupLicensingBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface GaitupLicensingKotlinThrowable : GaitupLicensingBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (GaitupLicensingKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GaitupLicensingKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface GaitupLicensingKotlinException : GaitupLicensingKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol GaitupLicensingKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<GaitupLicensingKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol GaitupLicensingKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GaitupLicensingKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<GaitupLicensingKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol GaitupLicensingKotlinx_serialization_coreKSerializer <GaitupLicensingKotlinx_serialization_coreSerializationStrategy, GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface GaitupLicensingKotlinRuntimeException : GaitupLicensingKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GaitupLicensingKotlinIllegalStateException : GaitupLicensingKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface GaitupLicensingKotlinCancellationException : GaitupLicensingKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GaitupLicensingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GaitupLicensingKotlinArray<T> : GaitupLicensingBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GaitupLicensingInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GaitupLicensingKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol GaitupLicensingKotlinx_serialization_coreEncoder
@required
- (id<GaitupLicensingKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<GaitupLicensingKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(GaitupLicensingKotlinArray<id<GaitupLicensingKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<GaitupLicensingKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<GaitupLicensingKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(GaitupLicensingKotlinArray<id<GaitupLicensingKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<GaitupLicensingKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GaitupLicensingKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol GaitupLicensingKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<GaitupLicensingKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<GaitupLicensingKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol GaitupLicensingKotlinx_serialization_coreDecoder
@required
- (id<GaitupLicensingKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<GaitupLicensingKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(GaitupLicensingKotlinArray<id<GaitupLicensingKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (GaitupLicensingKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol GaitupLicensingKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol GaitupLicensingKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GaitupLicensingKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GaitupLicensingKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface GaitupLicensingKotlinx_serialization_coreSerializersModule : GaitupLicensingBase
- (void)dumpToCollector:(id<GaitupLicensingKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<GaitupLicensingKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<GaitupLicensingKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<GaitupLicensingKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GaitupLicensingKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GaitupLicensingKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol GaitupLicensingKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface GaitupLicensingKotlinx_serialization_coreSerialKind : GaitupLicensingBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol GaitupLicensingKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<GaitupLicensingKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) GaitupLicensingKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GaitupLicensingKotlinNothing : GaitupLicensingBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol GaitupLicensingKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface GaitupLicensingKotlinEnum<E> : GaitupLicensingBase <GaitupLicensingKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface GaitupLicensingKotlinx_serialization_coreUpdateMode : GaitupLicensingKotlinEnum<GaitupLicensingKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GaitupLicensingKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) GaitupLicensingKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) GaitupLicensingKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol GaitupLicensingKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<GaitupLicensingKotlinKClass>)kClass serializer:(id<GaitupLicensingKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GaitupLicensingKotlinKClass>)baseClass actualClass:(id<GaitupLicensingKotlinKClass>)actualClass actualSerializer:(id<GaitupLicensingKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<GaitupLicensingKotlinKClass>)baseClass defaultSerializerProvider:(id<GaitupLicensingKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GaitupLicensingKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GaitupLicensingKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol GaitupLicensingKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol GaitupLicensingKotlinKClass <GaitupLicensingKotlinKDeclarationContainer, GaitupLicensingKotlinKAnnotatedElement, GaitupLicensingKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
