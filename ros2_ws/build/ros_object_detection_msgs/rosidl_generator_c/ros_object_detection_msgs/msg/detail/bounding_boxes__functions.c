// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_object_detection_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice
#include "ros_object_detection_msgs/msg/detail/bounding_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "ros_object_detection_msgs/msg/detail/bounding_box__functions.h"

bool
ros_object_detection_msgs__msg__BoundingBoxes__init(ros_object_detection_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!ros_object_detection_msgs__msg__BoundingBox__Sequence__init(&msg->data, 0)) {
    ros_object_detection_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  return true;
}

void
ros_object_detection_msgs__msg__BoundingBoxes__fini(ros_object_detection_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return;
  }
  // data
  ros_object_detection_msgs__msg__BoundingBox__Sequence__fini(&msg->data);
}

bool
ros_object_detection_msgs__msg__BoundingBoxes__are_equal(const ros_object_detection_msgs__msg__BoundingBoxes * lhs, const ros_object_detection_msgs__msg__BoundingBoxes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!ros_object_detection_msgs__msg__BoundingBox__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ros_object_detection_msgs__msg__BoundingBoxes__copy(
  const ros_object_detection_msgs__msg__BoundingBoxes * input,
  ros_object_detection_msgs__msg__BoundingBoxes * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!ros_object_detection_msgs__msg__BoundingBox__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ros_object_detection_msgs__msg__BoundingBoxes *
ros_object_detection_msgs__msg__BoundingBoxes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBoxes * msg = (ros_object_detection_msgs__msg__BoundingBoxes *)allocator.allocate(sizeof(ros_object_detection_msgs__msg__BoundingBoxes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_object_detection_msgs__msg__BoundingBoxes));
  bool success = ros_object_detection_msgs__msg__BoundingBoxes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_object_detection_msgs__msg__BoundingBoxes__destroy(ros_object_detection_msgs__msg__BoundingBoxes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_object_detection_msgs__msg__BoundingBoxes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__init(ros_object_detection_msgs__msg__BoundingBoxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBoxes * data = NULL;

  if (size) {
    data = (ros_object_detection_msgs__msg__BoundingBoxes *)allocator.zero_allocate(size, sizeof(ros_object_detection_msgs__msg__BoundingBoxes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_object_detection_msgs__msg__BoundingBoxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_object_detection_msgs__msg__BoundingBoxes__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__fini(ros_object_detection_msgs__msg__BoundingBoxes__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_object_detection_msgs__msg__BoundingBoxes__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_object_detection_msgs__msg__BoundingBoxes__Sequence *
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBoxes__Sequence * array = (ros_object_detection_msgs__msg__BoundingBoxes__Sequence *)allocator.allocate(sizeof(ros_object_detection_msgs__msg__BoundingBoxes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_object_detection_msgs__msg__BoundingBoxes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__destroy(ros_object_detection_msgs__msg__BoundingBoxes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_object_detection_msgs__msg__BoundingBoxes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__are_equal(const ros_object_detection_msgs__msg__BoundingBoxes__Sequence * lhs, const ros_object_detection_msgs__msg__BoundingBoxes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_object_detection_msgs__msg__BoundingBoxes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_object_detection_msgs__msg__BoundingBoxes__Sequence__copy(
  const ros_object_detection_msgs__msg__BoundingBoxes__Sequence * input,
  ros_object_detection_msgs__msg__BoundingBoxes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_object_detection_msgs__msg__BoundingBoxes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_object_detection_msgs__msg__BoundingBoxes * data =
      (ros_object_detection_msgs__msg__BoundingBoxes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_object_detection_msgs__msg__BoundingBoxes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_object_detection_msgs__msg__BoundingBoxes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_object_detection_msgs__msg__BoundingBoxes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
